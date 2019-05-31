/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHNonTextCandidateStroke.h>

@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (nonatomic,retain) NSDictionary * supportByStrokeIdentifier; 
@property (assign,nonatomic) double support; 
@property (assign,nonatomic) BOOL active; 
-(BOOL)_adjustSupportForLineClassificationWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 ;
-(BOOL)_adjustSupportForContainerClassificationWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 ;
-(void)setSupportByStrokeIdentifier:(NSDictionary *)arg1 ;
-(void)setSupport:(double)arg1 ;
-(BOOL)adjustSupportWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 ;
-(BOOL)updateByRemovingStrokeIdentifier:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
@end

