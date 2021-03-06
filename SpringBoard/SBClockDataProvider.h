//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBRemoteDataProvider-Protocol.h"

@class BBDataProviderProxy, NSMutableDictionary, NSString;

@interface SBClockDataProvider : NSObject <BBRemoteDataProvider>
{
    BBDataProviderProxy *_dataProviderProxy;
    NSMutableDictionary *_snoozedAlarmRequests;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_notificationRequestFromData:(id)arg1;
- (id)_notificationRequestFromActionResponse:(id)arg1;
- (void)_handleBulletinSnoozeDismissResponse:(id)arg1;
- (void)_removeBulletinWithPublisherBulletinID:(id)arg1;
- (void)_handleBulletinAlarmSnoozeResponse:(id)arg1;
- (void)_deviceFirstUnlocked;
- (void)_saveTimeInBedSamples;
- (void)_handleBulletinAlarmDismissResponse:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)_actionWithIdentifier:(id)arg1 title:(id)arg2;
- (id)_supplementaryActionsFromSnoozeAlarmNotificationRequest:(id)arg1;
- (id)_supplementaryActionsFromAlarmNotification:(id)arg1;
- (id)_stopActionFromSnoozeAlarmNotificationRequest:(id)arg1;
- (id)_stopActionFromAlarmNotificationRequest:(id)arg1;
- (id)_stopActionFromAlarmNotification:(id)arg1;
- (id)_snoozeActionFromAlarmNotificationRequest:(id)arg1;
- (id)_snoozeActionFromAlarmNotification:(id)arg1;
- (id)_dismissActionFromSnoozeNotification:(id)arg1;
- (id)_dismissActionFromAlarmNotification:(id)arg1;
- (id)_alternateActionFromAlarmNotification:(id)arg1;
- (id)_soundFromNotification:(id)arg1;
- (id)_vibrationPatternForVibrationName:(id)arg1;
- (id)_recordIDFromNotification:(id)arg1;
- (id)_recordIDFromNotificationRequest:(id)arg1;
- (_Bool)_isWakeNotificationRequest:(id)arg1;
- (_Bool)_isWakeNotification:(id)arg1;
- (_Bool)_isSleepNotificationRequest:(id)arg1;
- (_Bool)_isSleepNotification:(id)arg1;
- (id)_timerIDFromNotificationRequest:(id)arg1;
- (_Bool)_isTimerNotification:(id)arg1;
- (id)_alarmIDFromNotificationRequest:(id)arg1;
- (_Bool)_isAlarmNotificationRequest:(id)arg1;
- (_Bool)_isAlarmNotification:(id)arg1;
- (id)_snoozeBulletinRequestForNotificationRequest:(id)arg1;
- (id)_bulletinForNotification:(id)arg1;
- (void)_interruptAudioAndLockDeviceForNotification:(id)arg1;
- (void)_scheduledClockPendingNotificationRequestsDidChange:(id)arg1;
- (void)_handleClockNotificationUpdate:(id)arg1;
- (void)_publishBulletinForNotification:(id)arg1;
- (void)_handleNotificationDidDeliver:(id)arg1;
- (id)sortDescriptors;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (long long)_sectionSubtypeFromNotification:(id)arg1;
- (id)sectionParameters;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

