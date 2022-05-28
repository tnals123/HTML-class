class Student:
    def __init__(self,n,m,a,g):
        self.name = n
        self.major = m
        self.age = a
        self.gender = g

class StudentManageSystem:
    def __init__(self):
        self.students = {}

    def addStudent(self,s):
        self.students[s.name] = [s.name,s.major,s.age,s.gender]

    def removeStudent(self,n):
        del self.students[n]

    def printStudentInfo(self,n):
        info = ["이름", "전공", "나이" , "성별"]
        print(" = 학생 정보 출력 = ")
        print("-------------------------------")
        for i in range(0,len(self.students[n])):
            print(info[i] + " :     " + self.students[n][i])
        print("-------------------------------")

    def printStudentsInfo(self):
        info = ["이름", "전공", "나이" , "성별"]
        print(" = 전체 학생 정보 출력 = ")

        for key in self.students:
            print("-------------------------------")
            for i in range(0,len(self.students[key])):
                print(info[i] + " :     " + self.students[key][i])
            print("-------------------------------")


sms = StudentManageSystem()
sms.addStudent(Student("박찬호","야구","49","M"))
sms.addStudent(Student("박지성","축구","36","M"))
sms.addStudent(Student("김연경","배구","25","W"))
sms.addStudent(Student("박세리","골프","48","W"))
sms.addStudent(Student("손흥민","축구","31","M"))

sms.printStudentInfo("박찬호")
sms.printStudentInfo("박세리")

sms.printStudentsInfo()
sms.removeStudent("박찬호")
sms.removeStudent("김연경")
sms.removeStudent("박세리")
sms.printStudentsInfo()