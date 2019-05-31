/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSBagProfileConfig.h>

@class NSMutableDictionary, NSString;

@interface SSMutableBagProfileConfig : SSBagProfileConfig {

	NSMutableDictionary* _mutableBagKeysDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * mutableBagKeysDictionary;              //@synthesize mutableBagKeysDictionary=_mutableBagKeysDictionary - In the implementation block
@property (assign,nonatomic) double bagLoadTimeout; 
@property (nonatomic,copy) NSString * profile; 
@property (nonatomic,copy) NSString * profileVersion; 
-(id)bagKeysDictionary;
-(NSMutableDictionary *)mutableBagKeysDictionary;
-(void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)setMutableBagKeysDictionary:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

