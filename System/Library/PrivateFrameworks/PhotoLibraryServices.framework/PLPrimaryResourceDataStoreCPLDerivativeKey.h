/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@interface PLPrimaryResourceDataStoreCPLDerivativeKey : PLPrimaryResourceDataStoreKey {

	PLPrimaryDataStore_CPLKeyStrategy_KeyStruct _keyStruct;

}

@property (assign,nonatomic) PLPrimaryDataStore_CPLKeyStrategy_KeyStruct keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)keyData;
-(PLPrimaryDataStore_CPLKeyStrategy_KeyStruct)keyStruct;
-(void)setKeyStruct:(PLPrimaryDataStore_CPLKeyStrategy_KeyStruct)arg1 ;
-(id)store;
-(BOOL)isValid;
@end

