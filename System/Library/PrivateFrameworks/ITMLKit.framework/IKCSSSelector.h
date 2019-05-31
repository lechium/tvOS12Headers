/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSString;

@interface IKCSSSelector : NSObject {

	long long _type;
	NSString* _name;
	NSRange _range;

}

@property (assign) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (assign,nonatomic) NSRange range;                         //@synthesize range=_range - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSString *)stringValue;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end
