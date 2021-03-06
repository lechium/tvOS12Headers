/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSSet, NSDictionary;

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult {

	NSSet* _nontextCandidates;
	NSDictionary* _substrokesByStrokeIdentifier;

}

@property (nonatomic,retain,readonly) NSSet * nontextCandidates;                                //@synthesize nontextCandidates=_nontextCandidates - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * substrokesByStrokeIdentifier;              //@synthesize substrokesByStrokeIdentifier=_substrokesByStrokeIdentifier - In the implementation block
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokesByStrokeIdentifier:(id)arg4 nontextCandidates:(id)arg5 ;
-(NSSet *)nontextCandidates;
-(NSDictionary *)substrokesByStrokeIdentifier;
-(void)dealloc;
@end

