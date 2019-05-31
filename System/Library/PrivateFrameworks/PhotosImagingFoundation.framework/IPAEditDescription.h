/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/IPAEditOperationOrdering.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray, NSString;

@interface IPAEditDescription : NSObject <IPAEditOperationOrdering, NSCopying, NSFastEnumeration> {

	NSArray* _operations;
	long long _editSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)expectedOperationClass;
+(id)presetifyAdjustmentStack:(id)arg1 ;
+(unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1 inArray:(id)arg2 withOrdering:(id)arg3 ;
+(id)sortOperations:(id)arg1 withOrdering:(id)arg2 ;
+(BOOL)containsValidOperations:(id)arg1 ;
-(id)_operations;
-(BOOL)isEqualToDescription:(id)arg1 ;
-(long long)editSource;
-(id)descriptionWithOperations:(id)arg1 ;
-(id)archivalRepresentation;
-(id)initWithOperations:(id)arg1 editSource:(long long)arg2 ;
-(id)firstOperationWithIdentifier:(id)arg1 ;
-(unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1 ;
-(id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)descriptionByAddingOperation:(id)arg1 ;
-(id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_debugDescriptionSuffix;
-(BOOL)isEqualToDescriptionRenderOperations:(id)arg1 ;
-(unsigned long long)firstIndexOfOperationWithIdentifier:(id)arg1 ;
-(id)operationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfOperationWithUUID:(id)arg1 ;
-(unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1 ;
-(id)operationWithUUID:(id)arg1 ;
-(BOOL)containsOperationWithIdentifier:(id)arg1 ;
-(void)forEachImmutableOperation:(/*^block*/id)arg1 ;
-(void)withImmutableOperationAtIndex:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)descriptionByRemovingOperationAtIndex:(unsigned long long)arg1 ;
-(id)descriptionByRemovingOperation:(id)arg1 ;
-(id)descriptionByRemovingOperationsStartingAtIndex:(unsigned long long)arg1 ;
-(id)descriptionWithOperationsUpToUUID:(id)arg1 ;
-(id)_operationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IP6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(id)operations;
-(unsigned long long)operationCount;
@end

