# 🎓 Student Management System (C++)

A simple and beginner-friendly **Student Management System** built using C++. This program allows users to enter student details, input marks, and automatically calculates total, percentage, and grade.

---

## 🚀 Features

* 📥 Enter student details (ID, Name, Course)
* 📝 Input marks for 5 subjects
* ✅ Validates marks (must be between 0–100)
* 📊 Calculates:

  * Total Marks
  * Percentage
* 🏆 Automatically assigns grade:

  * A → 90 and above
  * B → 80–89
  * C → 70–79
  * D → 60–69
  * F → Below 60

---

## 🛠️ Technologies Used

* C++
* Standard Library:

  * `iostream`
  * `string`
  * `iomanip`

---

## ▶️ How to Run

### 🔹 Step 1: Compile

```bash id="c1run1"
g++ student.cpp -o student
```

### 🔹 Step 2: Execute

```bash id="c1run2"
./student
```

---

## 📌 Sample Output

```bash id="sample01"
ENTER STUDENT DETAILS:
ENTER STUDENT ID: 102
ENTER NAME OF THE STUDENT: Vidhyaa Lakshmi
ENTER COURSE NAME: Computer Science
ENTER YOUR MARKS ONE BY ONE:
93
99
95
95
96

STUDENT DETAILS:
NAME: Vidhyaa Lakshmi
ID: 102
COURSE: Computer Science
TOTAL: 478
PERCENTAGE: 95.60
GRADE: A
```

---

## ⚠️ Input Validation

* Marks must be within the range **0 to 100**
* Invalid entries will prompt the user to re-enter marks

---

## 📈 Future Enhancements

* 🔹 Support for multiple students
* 🔹 File handling (save & retrieve records)
* 🔹 Menu-driven interface
* 🔹 Graphical User Interface (GUI)

---

## 👨‍💻 Author

**VIDHYAA LAKSHMI S**

---

## ⭐ Support

If you found this project helpful, please consider giving it a ⭐ on GitHub!
