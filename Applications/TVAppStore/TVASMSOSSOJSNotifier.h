//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVApplicationController;

@interface TVASMSOSSOJSNotifier : NSObject
{
    TVApplicationController *_appController;	// 8 = 0x8
}

@property(readonly, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
- (void).cxx_destruct;	// IMP=0x0000000100011a6c
- (void)_sendVideoSubscriberChangedNotificationToTheJavaScript;	// IMP=0x0000000100011908
- (void)dealloc;	// IMP=0x0000000100011890
- (id)initWithAppController:(id)arg1;	// IMP=0x00000001000117c0
- (id)init;	// IMP=0x00000001000117a8

@end

