/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REOrderingArray, NSMutableSet, NSArray;

@interface REElementQueue : NSObject {

	REOrderingArray* _relevantElements;
	NSMutableSet* _hiddenElements;
	NSArray* _comparators;
	long long _maximumRelevantElementsCount;

}

@property (nonatomic,copy,readonly) NSArray * comparators;                        //@synthesize comparators=_comparators - In the implementation block
@property (assign,nonatomic) long long maximumRelevantElementsCount;              //@synthesize maximumRelevantElementsCount=_maximumRelevantElementsCount - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) long long visibleCount; 
@property (nonatomic,readonly) NSArray * allElements; 
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(NSArray *)allElements;
-(long long)visibleCount;
-(void)removeElement:(id)arg1 ;
-(id)initWithMaximumRelevantElementsCount:(long long)arg1 comparators:(id)arg2 ;
-(void)setMaximumRelevantElementsCount:(long long)arg1 ;
-(long long)maximumRelevantElementsCount;
-(void)addElement:(id)arg1 hidden:(BOOL)arg2 ;
-(void)updatePositionForElement:(id)arg1 hidden:(BOOL)arg2 ;
-(long long)indexOfElement:(id)arg1 ;
-(BOOL)containsElement:(id)arg1 ;
-(void)updateAllElements;
-(NSArray *)comparators;
-(long long)count;
@end

