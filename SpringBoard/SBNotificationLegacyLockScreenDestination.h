//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCNotificationDestination-Protocol.h"

@class NSString, SBLockScreenManager;
@protocol BBObserverDelegate, NCNotificationDestinationDelegate;

@interface SBNotificationLegacyLockScreenDestination : NSObject <NCNotificationDestination>
{
    id <NCNotificationDestinationDelegate> delegate;
    NSString *identifier;
    id <BBObserverDelegate> _bbObserverDelegate;
    unsigned long long _feed;
    SBLockScreenManager *_lockScreenManager;
}

@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(nonatomic) unsigned long long feed; // @synthesize feed=_feed;
@property(retain, nonatomic) id <BBObserverDelegate> bbObserverDelegate; // @synthesize bbObserverDelegate=_bbObserverDelegate;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)_isUILocked;
- (_Bool)_isCarPlayActive;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
- (void)_setUpBBObserverDelegate;
- (_Bool)interceptsQueueRequest:(id)arg1;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

