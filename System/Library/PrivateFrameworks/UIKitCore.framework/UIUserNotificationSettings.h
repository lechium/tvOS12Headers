/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _types;
	NSSet* _categories;

}

@property (nonatomic,readonly) unsigned long long types;              //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSSet * categories;               //@synthesize categories=_categories - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)settingsForTypes:(unsigned long long)arg1 categories:(id)arg2 ;
+(id)settingsForUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2 ;
+(id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)categories;
-(id)validatedSettings;
-(id)initWithUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2 ;
-(id)initWithTypes:(unsigned long long)arg1 categories:(id)arg2 ;
-(unsigned long long)types;
-(BOOL)mayPresentUserNotificationOfType:(unsigned long long)arg1 ;
-(unsigned long long)allowedUserNotificationTypes;
-(id)userNotificationActionSettings;
@end

