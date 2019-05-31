/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLBinaryIndex;

@interface NSSQLIndexIntermediate : NSSQLIntermediate {

	NSSQLBinaryIndex* _index;
	BOOL _isHandlingExpressions;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isIndexScoped;
-(id)initForIndex:(id)arg1 withScope:(id)arg2 ;
-(BOOL)isIndexExpressionScoped;
-(id)governingEntity;
-(id)_generateSQLForExpressionDescription:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
@end
