/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * longhands; 
@property (nonatomic,copy) NSArray * values; 
-(void)setLonghands:(NSArray *)arg1 ;
-(NSArray *)longhands;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSArray *)values;
@end

