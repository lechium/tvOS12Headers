/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface UNNotificationAction : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	unsigned long long _options;
	NSString* _textInputButtonTitle;
	NSString* _textInputPlaceholder;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * textInputButtonTitle;              //@synthesize textInputButtonTitle=_textInputButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * textInputPlaceholder;              //@synthesize textInputPlaceholder=_textInputPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                        //@synthesize options=_options - In the implementation block
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4 ;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 ;
-(id)_initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 url:(id)arg6 ;
-(NSString *)textInputPlaceholder;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(id)_description;
-(NSURL *)url;
-(NSString *)textInputButtonTitle;
@end

