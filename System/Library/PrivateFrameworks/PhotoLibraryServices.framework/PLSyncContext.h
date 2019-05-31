/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol PLSyncContext <NSObject>
@property (nonatomic,readonly) BOOL serverSupportsVision; 
@property (nonatomic,readonly) BOOL serverSupportsGraphHome; 
@property (nonatomic,readonly) BOOL serverSupportsSuggestion; 
@property (nonatomic,copy) NSArray * personUUIDsToDedupe; 
@required
-(BOOL)serverSupportsVision;
-(BOOL)serverSupportsSuggestion;
-(id)makeFace;
-(void)deleteFaces:(id)arg1;
-(id)personForUUID:(id)arg1;
-(BOOL)personUUIDIsDeleted:(id)arg1;
-(id)assetAdjustmentStateForCloudIdentifier:(id)arg1;
-(BOOL)serverSupportsGraphHome;
-(NSArray *)personUUIDsToDedupe;
-(void)setPersonUUIDsToDedupe:(id)arg1;

@end

