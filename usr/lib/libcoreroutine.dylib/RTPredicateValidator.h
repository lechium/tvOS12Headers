/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSPredicate, NSSet, NSError;

@interface RTPredicateValidator : NSObject <NSPredicateVisitor> {

	BOOL _validated;
	NSPredicate* _predicate;
	NSSet* _allowedKeys;
	NSError* _error;

}

@property (assign,nonatomic) BOOL validated;                       //@synthesize validated=_validated - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSSet * allowedKeys;                  //@synthesize allowedKeys=_allowedKeys - In the implementation block
@property (nonatomic,retain) NSError * error;                      //@synthesize error=_error - In the implementation block
+(BOOL)validatePredicate:(id)arg1 allowedKeys:(id)arg2 error:(id*)arg3 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(id)initWithPredicate:(id)arg1 allowedKeys:(id)arg2 ;
-(void)setValidated:(BOOL)arg1 ;
-(NSSet *)allowedKeys;
-(BOOL)validated;
-(void)setAllowedKeys:(NSSet *)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

