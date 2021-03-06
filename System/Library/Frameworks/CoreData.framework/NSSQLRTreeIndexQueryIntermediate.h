/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSExpression, NSArray;

@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate {

	NSSQLEntity* _entity;
	NSExpression* _indexName;
	NSArray* _properties;
	NSArray* _ranges;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)_validateCollection:(id)arg1 context:(id)arg2 ;
-(BOOL)_validateExpression:(id)arg1 context:(id)arg2 ;
-(id)initForIndexNamed:(id)arg1 onEntity:(id)arg2 properties:(id)arg3 ranges:(id)arg4 inScope:(id)arg5 ;
-(void)dealloc;
@end

