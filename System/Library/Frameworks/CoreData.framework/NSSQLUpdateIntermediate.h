/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {

	NSSQLUpdateColumnsIntermediate* _updateColumns;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isUpdateScoped;
-(void)setUpdateColumnsIntermediate:(id)arg1 ;
-(id)initWithEntity:(id)arg1 inScope:(id)arg2 ;
-(id)updateColumnsIntermediate;
-(void)dealloc;
@end

