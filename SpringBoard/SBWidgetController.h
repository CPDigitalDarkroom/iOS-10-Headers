//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBExtensionHandling-Protocol.h"
#import "WGWidgetDiscoveryControllerDelegate-Protocol.h"

@class NSString, WGWidgetDiscoveryController;

@interface SBWidgetController : NSObject <WGWidgetDiscoveryControllerDelegate, SBExtensionHandling>
{
    WGWidgetDiscoveryController *_widgetDiscoveryController;
}

@property(retain, nonatomic, getter=_widgetDiscoveryController) WGWidgetDiscoveryController *widgetDiscoveryController; // @synthesize widgetDiscoveryController=_widgetDiscoveryController;
- (void).cxx_destruct;
- (void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)widgetDiscoveryController:(id)arg1 didEndUsingStatusBarAssertion:(id)arg2;
- (id)whiteStatusBarAssertionForWidgetDiscoveryController:(id)arg1;
- (_Bool)widgetDiscoveryController:(id)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)arg2;
- (id)widgetDiscoveryController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
- (void)widgetDiscoveryController:(id)arg1 requestUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)arg1;
- (void)widgetDiscoveryController:(id)arg1 widgetWithBundleIdentifier:(id)arg2 didEncounterProblematicSnapshotAtURL:(id)arg3;
- (id)newWidgetGroupViewController;
- (void)_reloadWidgetPreferences;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

