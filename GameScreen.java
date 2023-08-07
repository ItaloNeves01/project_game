
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import java.io.IOException;

public class GameScreen extends JFrame {

    public GameScreen() {
        setTitle("The Princess Bride in C");
        setSize(100, 100);
        setMinimumSize(new Dimension(700, 500));
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        JLabel instructionsLabel = new JLabel("Clique em 'Iniciar o jogo' para começar!");

        JButton iniciar = new JButton("Iniciar o jogo");
        iniciar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                iniciarJogo();
            }
        });

        add(instructionsLabel, BorderLayout.CENTER);
        add(iniciar, BorderLayout.SOUTH);
    }

    private void iniciarJogo() {
        try {
            String osName = System.getProperty("os.name").toLowerCase();

            ProcessBuilder processBuilder;
            if (osName.contains("win")) {
                // Comando para Windows
                processBuilder = new ProcessBuilder("cmd.exe", "/c", "jogo.exe");
            } else {
                // Comando para Linux/Unix
                processBuilder = new ProcessBuilder("./jogo");
            }

            processBuilder.directory(new File("."));
            processBuilder.start();
        } catch (IOException ex) {
            JOptionPane.showMessageDialog(this, "Erro ao iniciar o jogo:\n" + ex.getMessage(),
                    "Erro", JOptionPane.ERROR_MESSAGE);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            GameScreen tela = new GameScreen();
            tela.setVisible(true);
        });
    }
}
