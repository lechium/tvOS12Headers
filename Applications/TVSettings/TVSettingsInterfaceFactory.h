//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_TVInterfaceCreatingPrivate.h"

@class NSString;

@interface TVSettingsInterfaceFactory : NSObject <_TVInterfaceCreatingPrivate>
{
}

+ (id)sharedInterfaceFactory;	// IMP=0x00000001000bbf8c
+ (void)initialize;	// IMP=0x00000001000bbf1c
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x00000001000bc05c
- (void)setup;	// IMP=0x00000001000bc00c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

