/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSSet;

@interface RTMediaRemoteNotificationPrimingBundleIdentifiersChanged : RTNotification {

	NSSet* _bundleIdentifiers;

}

@property (nonatomic,copy,readonly) NSSet * bundleIdentifiers;              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(NSSet *)bundleIdentifiers;
@end

