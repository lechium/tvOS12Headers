/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableDictionary, NSMutableArray, NSData;

@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor> {

	NSMutableDictionary* _filter;
	NSMutableArray* _pidArray;
	NSMutableArray* _processArray;
	NSMutableArray* _subsystemArray;
	NSMutableArray* _categoryArray;

}

@property (nonatomic,readonly) NSData * data; 
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)addCategory:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(void)addProcessID:(id)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(void)addSubsystem:(id)arg1 ;
-(void)processLeftExpression:(id*)arg1 andRightExpression:(id*)arg2 ;
-(void)addProcess:(id)arg1 ;
-(NSData *)data;
@end
