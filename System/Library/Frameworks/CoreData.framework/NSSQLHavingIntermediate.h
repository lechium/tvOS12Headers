/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLWhereIntermediate;

@interface NSSQLHavingIntermediate : NSSQLIntermediate {

	NSSQLWhereIntermediate* _whereClause;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3 ;
-(BOOL)isHavingScoped;
-(void)dealloc;
@end

