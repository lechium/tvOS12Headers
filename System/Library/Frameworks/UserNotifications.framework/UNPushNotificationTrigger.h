/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNPushNotificationTrigger : UNNotificationTrigger {

	BOOL _isContentAvailable;
	BOOL _isMutableContent;

}

@property (nonatomic,readonly) BOOL isContentAvailable;              //@synthesize isContentAvailable=_isContentAvailable - In the implementation block
@property (nonatomic,readonly) BOOL isMutableContent;                //@synthesize isMutableContent=_isMutableContent - In the implementation block
+(id)triggerWithContentAvailable:(BOOL)arg1 mutableContent:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithContentAvailable:(BOOL)arg1 mutableContent:(BOOL)arg2 ;
-(BOOL)isContentAvailable;
-(BOOL)isMutableContent;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
