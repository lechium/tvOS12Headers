/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableArray, NSPredicate, NSMutableSet, NSArray;

@interface _OSLogPredicateMapper : NSObject <NSPredicateVisitor> {

	int _pass;
	NSMutableArray* _validationErrors;
	unsigned long long _flags;
	NSPredicate* _predicate;
	NSMutableArray* _stack;

}

@property (nonatomic,retain) NSMutableArray * stack;                       //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) NSMutableSet * validKeyPaths; 
@property (nonatomic,readonly) unsigned long long flags;                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSPredicate * mappedPredicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSArray * validationErrors;                 //@synthesize validationErrors=_validationErrors - In the implementation block
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(unsigned long long)flags;
-(id)initWithPredicate:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 andValidate:(BOOL)arg2 ;
-(NSMutableSet *)validKeyPaths;
-(id)mapKeywordToConstantExpression:(id)arg1 keywordMap:(id)arg2 ;
-(id)mapEventTypeExpression:(id)arg1 ;
-(id)mapMessageTypeExpression:(id)arg1 ;
-(id)mapSignpostScopeExpression:(id)arg1 ;
-(id)mapSignpostTypeExpression:(id)arg1 ;
-(void)mapLeftExpression:(id*)arg1 andRightExpression:(id*)arg2 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(void)processCompoundPredicate:(id)arg1 ;
-(void)validateExpression:(id)arg1 ;
-(NSPredicate *)mappedPredicate;
-(NSArray *)validationErrors;
-(void)setStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stack;
@end
