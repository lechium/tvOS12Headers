/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject {

	NSManagedObjectContext* _context;

}
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2 ;
-(id)replacementValueForValue:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end

