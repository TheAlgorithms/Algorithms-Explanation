<h1 dir="rtl" text-align="right"> חישוב סדרת פיבונאצ'י</h1>

<div dir="rtl" text-align="right">
 
 במתמטיקה, מספרי פיבונאצ'י המצוינים בדרך כלל כ:
 F(n), יוצרים רצף המכונה רצף פיבונאצ'י,<br> 
 כך שכל מספר הוא הסכום של שני הקודמים, החל מ- 0 ו- 1. הרצף נראה כך:
 
 <br>
 
</div>

<p dir="rtl" text-align="center"><b>[0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...]</b></p>

<h2 dir="rtl" text-align="right"> יישום</h2>

<p dir="rtl" text-align="right">
מציאת החישוב ה: <b>N-th</b> ברצף זה שימושי ביישומים רבים.<br>
לאחרונה רצף פיבונאצ'י ויחס הזהב מעניינים מאוד חוקרים בתחומי מדע רבים כולל פיזיקה של אנרגיה גבוהה, מכניקת קוונטים, קריפטוגרפיה וקידוד.
</p>

<h2 dir="rtl" text-align="right"> צעדים למימוש</h2>

<p dir="rtl" text-align="right">
1. הכן מטריצה בסיסית <br>
2. חשב את כוחה של מטריצה זו<br>
3. קח ערך מקביל ממטריקס
</p>

<div text-align="center">

<h2 dir="rtl" text-align="right"> דוגמא</h2>
<h6 dir="rtl" text-align="center"> מציאת האיבר ה-8 בסדרת פיבונאצ'י</h6>

</div>

<h4 dir="rtl" text-align="right"> חישוב 0</h4>

```
| F(n+1)  F(n)  |
| F(n)    F(n-1)|
```

<h4 dir="rtl" text-align="right"> חישוב 1</h4>

```
חישוב matrix^1
| 1 1 |
| 1 0 |
```

<h4 dir="rtl" text-align="right"> חישוב 2</h4>

```
חישוב matrix^2
| 2 1 |
| 1 1 |
```

<h4 dir="rtl" text-align="right"> חישוב 3</h4>

```
חישוב matrix^4
| 5 3 |
| 3 2 |
```

<h4 dir="rtl" text-align="right"> חישוב 4</h4>

```
חישוב matrix^8
| 34 21 |
| 21 13 |
```

<h4 dir="rtl" text-align="center"> חישוב 5</h4>

```
F(8)=21
```

<h2 dir="rtl" text-align="center"> קישור לסרטון הסבר</h2>

- [Youtube](https://www.youtube.com/watch?v=EEb6JP3NXBI)

<h2 dir="rtl" text-align="center">שונות</h2>

- [הוכחה לסדרת פיבונאצ'י](https://brilliant.org/wiki/fast-fibonacci-transform/)
