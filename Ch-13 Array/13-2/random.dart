import 'dart:math';

void main() {
  List name = [
    // "Radhesh Bhuva",
    "OM TRIVEDI",
    // "Prince Sojitra",
    // "Karm Mavani",
    // "Vraj Dholariya",
  ];

  Random random = Random();
  int index = random.nextInt(name.length);

  print("NAME: ${name[index]}");
}
