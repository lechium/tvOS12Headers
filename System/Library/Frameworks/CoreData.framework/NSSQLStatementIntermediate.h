/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSString, NSSQLWhereIntermediate, NSSQLLimitIntermediate, NSSQLOrderIntermediate;

@interface NSSQLStatementIntermediate : NSSQLIntermediate {

	NSSQLEntity* _governingEntity;
	NSString* _governingAlias;
	NSString* _correlationToken;
	NSSQLWhereIntermediate* _whereClause;
	NSSQLLimitIntermediate* _limitClause;
	NSSQLOrderIntermediate* _orderIntermediate;

}
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(void)setLimitIntermediate:(id)arg1 ;
-(id)whereIntermediate;
-(id)correlationToken;
-(id)orderIntermediate;
-(id)limitIntermediate;
-(id)governingAlias;
-(void)setWhereIntermediate:(id)arg1 ;
-(void)setOrderIntermediate:(id)arg1 ;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3 ;
-(id)governingEntity;
-(void)setGoverningAlias:(id)arg1 ;
-(void)setCorrelationToken:(id)arg1 ;
-(void)setGoverningEntity:(id)arg1 ;
-(void)dealloc;
@end

