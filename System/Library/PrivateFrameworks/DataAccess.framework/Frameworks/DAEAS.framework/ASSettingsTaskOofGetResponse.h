/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, NSArray, NSMutableArray;

@interface ASSettingsTaskOofGetResponse : ASItem {

	NSNumber* _oofState;
	NSString* _startTime;
	NSString* _endTime;
	NSArray* _oofMessages;
	NSMutableArray* _mOofMessages;

}

@property (nonatomic,retain) NSMutableArray * mOofMessages;              //@synthesize mOofMessages=_mOofMessages - In the implementation block
@property (nonatomic,retain) NSNumber * oofState;                        //@synthesize oofState=_oofState - In the implementation block
@property (nonatomic,retain) NSString * startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSString * endTime;                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSArray * oofMessages;                      //@synthesize oofMessages=_oofMessages - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSString *)endTime;
-(void)setEndTime:(NSString *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSMutableArray *)mOofMessages;
-(void)setMOofMessages:(NSMutableArray *)arg1 ;
-(NSNumber *)oofState;
-(void)setOofState:(NSNumber *)arg1 ;
-(void)addOofMessages:(id)arg1 ;
-(NSArray *)oofMessages;
-(id)convertToDAOofParams;
-(void)setOofMessages:(NSArray *)arg1 ;
-(id)description;
-(NSString *)startTime;
-(void)setStartTime:(NSString *)arg1 ;
@end

