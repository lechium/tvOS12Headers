/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString, NSArray;

@interface RTWalletManagerNotificationPassUsed : RTNotification {

	NSString* _passTypeIdentifier;
	long long _source;
	NSArray* _storeIDs;

}

@property (nonatomic,readonly) NSString * passTypeIdentifier;              //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,readonly) long long source;                           //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSArray * storeIDs;                    //@synthesize storeIDs=_storeIDs - In the implementation block
-(NSArray *)storeIDs;
-(NSString *)passTypeIdentifier;
-(long long)source;
@end

