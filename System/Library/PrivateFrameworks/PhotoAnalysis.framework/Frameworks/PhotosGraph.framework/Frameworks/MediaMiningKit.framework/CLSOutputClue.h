/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSClue.h>

@class NSMutableArray, CLSEvent, CLSPerson, CLSPlace;

@interface CLSOutputClue : CLSClue {

	NSMutableArray* _relatedInputTimeClues;
	NSMutableArray* _relatedInputLocationClues;
	NSMutableArray* _relatedInputPeopleClues;
	CLSEvent* _relatedEvent;
	CLSPerson* _relatedPerson;
	CLSPlace* _relatedPlace;

}

@property (retain) CLSPlace * relatedPlace;                //@synthesize relatedPlace=_relatedPlace - In the implementation block
@property (retain) CLSPerson * relatedPerson;              //@synthesize relatedPerson=_relatedPerson - In the implementation block
@property (retain) CLSEvent * relatedEvent;                //@synthesize relatedEvent=_relatedEvent - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(CLSEvent *)relatedEvent;
-(void)setRelatedPlace:(CLSPlace *)arg1 ;
-(void)addRelatedInputClues:(id)arg1 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(CLSPlace *)relatedPlace;
-(CLSPerson *)relatedPerson;
-(id)relatedInputClues;
-(id)relatedInputPeopleClues;
-(id)relatedInputTimeClues;
-(void)setRelatedEvent:(CLSEvent *)arg1 ;
-(void)setRelatedPerson:(CLSPerson *)arg1 ;
-(id)relatedInputLocationClues;
-(id)init;
-(id)description;
@end

