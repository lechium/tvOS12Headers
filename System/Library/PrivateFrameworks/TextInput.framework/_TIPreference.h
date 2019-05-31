/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TIPreference : NSObject {

	NSString* _key;
	NSString* _domain;
	id _defaultValue;
	id _currentValue;

}

@property (nonatomic,retain) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) id defaultValue;                //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) id currentValue;                //@synthesize currentValue=_currentValue - In the implementation block
+(id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(void)setCurrentValue:(id)arg1 ;
-(NSString *)key;
-(NSString *)domain;
-(void)setKey:(NSString *)arg1 ;
-(id)defaultValue;
-(id)currentValue;
@end

