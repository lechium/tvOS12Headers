/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageAsset.h>

@class CUICatalog, NSData;

@interface _UIImageStackImageAsset : UIImageAsset {

	CUICatalog* _catalog;
	NSData* _stackData;

}

@property (nonatomic,retain) CUICatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,copy) NSData * stackData;                  //@synthesize stackData=_stackData - In the implementation block
-(id)imageWithTraitCollection:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setStackData:(NSData *)arg1 ;
-(NSData *)stackData;
-(CUICatalog *)catalog;
-(void)setCatalog:(CUICatalog *)arg1 ;
@end

