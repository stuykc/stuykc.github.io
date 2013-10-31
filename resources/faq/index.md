---
layout: page
title: FAQ
faq:
    - question: What is Key Club?
      answer: Key Club stands for Kiwanis Educates Youth (we do not make keys!). It is the oldest and largest service program for high school students. It is a student-led organization that teaches leadership through service to others. As members of the Kiwanis International family, Key Club members build themselves as they build their schools and communities. Key Club has approximately 260,000 members in approximately 5,000 clubs. Key Club is represented in 31 countries.
    - question: Why should I join Key Club/what makes Key Club different?
      answer:
          - For all the reasons above! Key Club is different because of the legitimacy of the organization and all of the opportunities we provide you. Key Club is one of the few service organizations that actually is a student-led organization from top to bottom. That means the members elect the officers and pay the dues. What better way to teach responsibility?
          - We are also well-recognized by communities and colleges for what we do. As Key Clubbers, you can...
          - <li>Run for positions in the international, district, and club levels</li>
            <li>Apply for awards such as the Distinguished Key Clubber Award</li>
            <li>Attend LTC (the Leadership Training Conference for all New York District Key Clubbers) and ICON (the International Convention for all Key Clubbers around the world)</li>
            <li>Participate in the many Key Club projects</li>
            <li>Meet Key Clubbers from all over the city</li>
    - question: How do I join Stuyvesant Key Club?
      answer: Sign up at join.stuykc.org. You may pay your dues at the next meeting or contact us at stuyvesantkeyclub@gmail.com so one of the cabinet officers can meet up with you.
    - question: Why am I not receiving emails? I signed up! -rage-
      answer: Chill. Officers have to manually add members to the google group and there is a limit to how many people we can add each day. You will eventually be added, so don't worry! At the meantime, you can go to stuykc.org to check out all of our latest events and sign up for them. Also, chances are our emails were sent to your spam, so check your spam folder.
    - question: What are dues? How much do they cost?
      answer: Stuyvesant Key Club's dues are $13. You must repay your dues every year.
    - question: Why does Key Club have dues?
      answer: Dues are required by Key Club International and the New York District Key Club. This money sustains Key Club and allows it to remain as an international student-led organization. They pay for legitimate membership (your very own membership card, pin, and booklet!) and fund projects. Remember, officers pay dues too!
    - question: Do I HAVE to pay dues to be in Key Club?
      answer: Legitimately, yes. You will not receive recognition (a certificate at the end of the year) if you do not pay your dues. You also may not run for Key Club positions, apply for awards, or attend LTC or ICON. Then again, if you don't mind all of this and just want to attend Key Club events for fun, nobody is stopping you :P Students will have until February to pay their dues.
    - question: How many hours do I have to have?
      answer: You must perform 30 hours of community service by the end of the year in order to receive a certificate.
    - question: But 30 hours is so much! What do I do?
      answer: 30 hours is honestly not that much and is definitely attainable. Many members have surpassed the minimum. Besides the wide range of events we provide, you can also earn points by being project captain, coming to meetings, and being part of one of our seven committees. There is no excuse for not reaching 30 hours.
    - question: When do you guys have meetings?
      answer: We will be having biweekly meetings, give or take. All meetings will be announced ahead of time in our emails. You will receive 45 points for each meeting. This is subject to change.
    - question: How does the points system work?
      answer: Every minute of service equals one point. You get 60 points for each hour.
    - question: Oh no! I forgot to sign up for an event! Can I still go?
      answer: Yes, you can still go!
    - question: Oh no! I can't make it to an event I signed up for! Will my hours get deducted? What do I do?
      answer: We understand that things pop up and we will NOT deduct your hours. However, please do try to let us know asap by emailing us at stuyvesantkeyclub@gmail.com. If we see people constantly dropping out of events and abusing this leniency, we may change this.
    - question: What is a project captain responsible for? What happens if there isn't a project captain?
      answer: 
          - All of the sign up sheets will give you an option of being project captain unless the event already has one. If you are selected as project captain, we will email you an empty PRF as well as any special instructions. As project captain, you are required to help members sign people in/out of an event, fill this information out on a Project Report Form, and email the PRF to stuyvesantkeyclub@gmail.com. You may also have to direct Key Clubbers to the location if they call you and are lost. When you fill out the PRF, it will automatically add in 25 extra minutes for you!
          - In the chance that nobody signed up for project captain, we will email the members who signed up for the event informing them of this. It just means that somebody has to step up. The responsibilities of a project captain aren't too difficult or tedious. And make sure that you know where the location is so that you don't get lost and not have a contact.
    - question: This FAQ was totally amazing but I still have some questions. Who do I contact?
      answer: You can contact us at stuyvesantkeyclub@gmail.com with any concerns. We will be more than happy to help you out! If you want to learn more about Key Club in general, you can check out keyclub.org, nydkc.org, or stuykc.org.
---
<div class="panel-group" id="accordion">
    {% for item in page.faq %}
    <div class="panel panel-default well-small">
        <div class="panel-heading">
            <h4 class="panel-title">
                <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#collapse{{ forloop.index0 }}">
                    {{ item.question }}
                </a>
            </h4>
        </div>
        <div id="collapse{{ forloop.index0 }}" class="panel-collapse collapse">
            <div class="panel-body">
                {% for p in item.answer %}
                <p>{{ p }}</p>
                {% endfor %}
            </div>
        </div>
    </div>
    {% endfor %}
</div>
