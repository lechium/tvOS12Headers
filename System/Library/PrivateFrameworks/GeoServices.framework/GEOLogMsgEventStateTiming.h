/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {

	double _durationInOldState;
	NSMutableArray* _stateTransitionFeedbacks;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSMutableArray * stateTransitionFeedbacks;              //@synthesize stateTransitionFeedbacks=_stateTransitionFeedbacks - In the implementation block
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState;                              //@synthesize durationInOldState=_durationInOldState - In the implementation block
+(Class)stateTransitionFeedbackType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addStateTransitionFeedback:(id)arg1 ;
-(void)setDurationInOldState:(double)arg1 ;
-(unsigned long long)stateTransitionFeedbacksCount;
-(void)clearStateTransitionFeedbacks;
-(id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1 ;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
-(NSMutableArray *)stateTransitionFeedbacks;
-(void)setStateTransitionFeedbacks:(NSMutableArray *)arg1 ;
-(double)durationInOldState;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

