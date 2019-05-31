/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {

	BOOL _compoundPredicate;
	NSMutableArray* _keys;
	NSMutableArray* _allModifierPredicates;
	NSMutableArray* _setExpressions;
	NSMutableArray* _subqueries;

}
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(id)allModifierPredicates;
-(id)keypaths;
-(id)subqueries;
-(id)setExpressions;
-(id)init;
-(void)dealloc;
@end

