shell dumpsys activity.md

# Intro:
- Activity manager to print a **dump of its current state**. 

# Result Components:
1. The first part of that is the *complete activity history*, organized by task. 
2. A lot of stuff printed after that, so you may need to scroll up a bit to find what you want.

# Examples:
1. Example 1:
Input:
`adb shell dumpsys activity`
Output:
```
Activities in Current Activity Manager State:
  * TaskRecord{44d07218 #4 A android.task.contacts}
    clearOnBackground=true numActivities=2 rootWasReset=true
    affinity=android.task.contacts
    intent={act=android.intent.action.MAIN cat=[android.intent.category.LAUNCHER] flg=0x10600000 cmp=com.android.contacts/.DialtactsActivity bnds=[125,640][235,758]}
    origActivity=com.android.contacts/.DialtactsContactsEntryActivity
    realActivity=com.android.contacts/.DialtactsActivity
    lastActiveTime=288203177 (inactive for 14s)
    * Hist #8: HistoryRecord{44b87a30 com.android.contacts/.ViewContactActivity}
        packageName=com.android.contacts processName=android.process.acore
        launchedFromUid=10004 app=ProcessRecord{44c4f348 1168:android.process.acore/10004}
        Intent { act=android.intent.action.VIEW dat=content://com.android.contacts/contacts/lookup/144i148.144i461a29500afc8eeb/1927 cmp=com.android.contacts/.ViewContactActivity }
        frontOfTask=false task=TaskRecord{44d07218 #4 A android.task.contacts}
        taskAffinity=android.task.contacts
        realActivity=com.android.contacts/.ViewContactActivity
        base=/system/app/Contacts.apk/system/app/Contacts.apk data=/data/data/com.android.contacts
        labelRes=0x7f090012 icon=0x7f02006b theme=0x7f0e0004
        stateNotNeeded=false componentSpecified=false isHomeActivity=false
        configuration={ scale=1.0 imsi=310/4 loc=en_US touch=3 keys=2/1/2 nav=2/2 orien=1 layout=34}
        resultTo=HistoryRecord{44d174d0 com.android.contacts/.DialtactsContactsEntryActivity} resultWho=favorites resultCode=2
        launchFailed=false haveState=false icicle=null
        state=RESUMED stopped=false delayedResume=false finishing=false
        keysPaused=false inHistory=true persistent=false launchMode=0
        fullscreen=true visible=true frozenBeforeDestroy=false thumbnailNeeded=false idle=true
        waitingVisible=false nowVisible=true
    * Hist #7: HistoryRecord{44d174d0 com.android.contacts/.DialtactsContactsEntryActivity}
        packageName=com.android.contacts processName=android.process.acore
        launchedFromUid=10004 app=ProcessRecord{44c4f348 1168:android.process.acore/10004}
        Intent { act=android.intent.action.MAIN cat=[android.intent.category.LAUNCHER] flg=0x10200000 cmp=com.android.contacts/.DialtactsContactsEntryActivity bnds=[125,640][235,758] }
        frontOfTask=true task=TaskRecord{44d07218 #4 A android.task.contacts}
        taskAffinity=android.task.contacts
        realActivity=com.android.contacts/.DialtactsActivity
        base=/system/app/Contacts.apk/system/app/Contacts.apk data=/data/data/com.android.contacts
        labelRes=0x7f090007 icon=0x7f02006b theme=0x7f0e0000
        stateNotNeeded=false componentSpecified=true isHomeActivity=false
        configuration={ scale=1.0 imsi=310/4 loc=en_US touch=3 keys=2/1/2 nav=2/2 orien=1 layout=34}
        launchFailed=false haveState=true icicle=Bundle[mParcelledData.dataSize=4196]
        state=STOPPED stopped=true delayedResume=false finishing=false
        keysPaused=false inHistory=true persistent=false launchMode=2
        fullscreen=true visible=false frozenBeforeDestroy=false thumbnailNeeded=false idle=true
  * TaskRecord{44c4ee90 #2 A com.android.launcher}
    clearOnBackground=true numActivities=1 rootWasReset=true
    affinity=com.android.launcher
    intent={act=android.intent.action.MAIN cat=[android.intent.category.HOME] flg=0x10600000 cmp=com.android.launcher/.Launcher}
    realActivity=com.android.launcher/.Launcher
    lastActiveTime=214734838 (inactive for 73483s)
    * Hist #6: HistoryRecord{44c4d988 com.android.launcher/.Launcher}
        packageName=com.android.launcher processName=android.process.acore
        launchedFromUid=0 app=ProcessRecord{44c4f348 1168:android.process.acore/10004}
        Intent { act=android.intent.action.MAIN cat=[android.intent.category.HOME] flg=0x10000000 cmp=com.android.launcher/.Launcher }
        frontOfTask=true task=TaskRecord{44c4ee90 #2 A com.android.launcher}
        taskAffinity=com.android.launcher
        realActivity=com.android.launcher/.Launcher
        base=/system/app/Launcher.apk/system/app/Launcher.apk data=/data/data/com.android.launcher
        labelRes=0x7f0a0000 icon=0x7f020015 theme=0x103005f
        stateNotNeeded=true componentSpecified=false isHomeActivity=true
        configuration={ scale=1.0 imsi=310/4 loc=en_US touch=3 keys=2/1/2 nav=2/2 orien=1 layout=34}
        launchFailed=false haveState=true icicle=Bundle[mParcelledData.dataSize=5964]
        state=STOPPED stopped=true delayedResume=false finishing=false
        keysPaused=false inHistory=true persistent=false launchMode=2
        fullscreen=true visible=false frozenBeforeDestroy=false thumbnailNeeded=false idle=true

```

# Appendix
- Nolan Amy, View the Task's activity stack (2010-March-15) <https://stackoverflow.com/questions/2442713/view-the-tasks-activity-stack> [accessed 7 May 2019].
