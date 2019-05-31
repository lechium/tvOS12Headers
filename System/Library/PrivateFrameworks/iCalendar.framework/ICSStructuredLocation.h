/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, NSData;

@interface ICSStructuredLocation : ICSProperty

@property (nonatomic,retain) NSString * fmtype; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * loctype; 
@property (nonatomic,retain) NSString * abURLString; 
@property (nonatomic,retain) NSData * mapKitHandle; 
@property (assign,nonatomic) double radius; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,retain) NSString * routing; 
-(void)setRouting:(NSString *)arg1 ;
-(NSString *)routing;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(NSString *)loctype;
-(void)setLoctype:(NSString *)arg1 ;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(NSString *)fmtype;
-(void)setFmtype:(NSString *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(double)radius;
-(NSString *)displayName;
-(void)setRadius:(double)arg1 ;
@end

