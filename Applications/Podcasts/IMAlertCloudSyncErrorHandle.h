//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMCloudSyncErrorHandle.h"

@class IMAlertCloudSyncErrorHandleAlertView;

@interface IMAlertCloudSyncErrorHandle : IMCloudSyncErrorHandle
{
    IMAlertCloudSyncErrorHandleAlertView *_alertView;	// 40 = 0x28
}

@property(retain, nonatomic) IMAlertCloudSyncErrorHandleAlertView *alertView; // @synthesize alertView=_alertView;
- (id)_cancelButtonTitle;	// IMP=0x00000001002053fc
- (id)_acceptButtonTitle;	// IMP=0x00000001002053cc
- (id)_title;	// IMP=0x000000010020539c
- (id)_message;	// IMP=0x0000000100205238
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x000000010020514c
- (void)resolveError;	// IMP=0x000000010020504c
- (void)dealloc;	// IMP=0x0000000100204ff0
- (id)init;	// IMP=0x0000000100204e74

@end

