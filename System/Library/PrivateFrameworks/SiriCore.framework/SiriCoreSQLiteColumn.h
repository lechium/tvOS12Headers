/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SiriCoreSQLiteColumn <NSObject>
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isPrimaryKey; 
@property (nonatomic,readonly) BOOL isNotNull; 
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> defaultValue; 
@required
-(BOOL)isPrimaryKey;
-(BOOL)isNotNull;
-(long long)identifier;
-(NSString *)name;
-(NSString *)type;
-(id<SiriCoreSQLiteValue>)defaultValue;

@end

