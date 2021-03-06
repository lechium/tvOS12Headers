/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSPreferences, NSString;

@interface TSKPreferencesFacade : NSObject {

	TVSPreferences* _prefs;
	NSString* _domain;

}

@property (nonatomic,copy,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
-(id)initWithDomain:(id)arg1 notifyChanges:(BOOL)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)domain;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

