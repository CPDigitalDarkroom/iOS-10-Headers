//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SBTreeNodeViewController;
@protocol SBViewControllerTransitionCoordinator;

@protocol SBTreeNodeViewControllerTransitionObserver <NSObject>

@optional
- (void)treeNodeViewController:(SBTreeNodeViewController *)arg1 willPerformOperation:(long long)arg2 fromViewController:(SBTreeNodeViewController *)arg3 fromIndexPath:(NSIndexPath *)arg4 toViewController:(SBTreeNodeViewController *)arg5 toIndexPath:(NSIndexPath *)arg6 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg7;
@end

