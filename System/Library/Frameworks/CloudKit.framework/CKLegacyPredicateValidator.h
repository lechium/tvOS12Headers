/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidator.h>

@interface CKLegacyPredicateValidator : CKPredicateValidator
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)validateCompoundPredicate:(id)arg1 ;
-(void)validateComparisonPredicate:(id)arg1 ;
-(BOOL)validateFullTextSearchPredicate:(id)arg1 ;
-(BOOL)validateNearPredicate:(id)arg1 ;
-(BOOL)validateContainsPredicate:(id)arg1 ;
-(BOOL)validateInPredicate:(id)arg1 ;
-(BOOL)validateContainsAnyPredicate:(id)arg1 ;
-(BOOL)validateContainsAllInPredicate:(id)arg1 ;
-(BOOL)validateBeginsWithPredicate:(id)arg1 ;
-(BOOL)validateBetweenPredicate:(id)arg1 ;
-(BOOL)validateBasicOperatorPredicate:(id)arg1 ;
-(void)validate:(id)arg1 ;
-(unsigned long long)_comparisonOptionForString:(id)arg1 ;
@end

