//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVIUntarUtility : NSObject
{
}

+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100013a34
+ (void)_cleanupReadArchive:(struct archive **)arg1 writeArchive:(struct archive **)arg2;	// IMP=0x0000000100013a0c
+ (_Bool)_writeFinishEntryOnArchive:(struct archive **)arg1 error:(id *)arg2;	// IMP=0x00000001000138ac
+ (_Bool)_writeDataToDiskFromArchive:(struct archive **)arg1 usingWriteArchive:(struct archive **)arg2 error:(id *)arg3;	// IMP=0x00000001000136c0
+ (_Bool)_writeHeaderToArchive:(struct archive **)arg1 withEntry:(struct archive_entry **)arg2 usingDestination:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100013548
+ (void)_setFileDestinationPath:(id)arg1 forEntry:(struct archive_entry **)arg2;	// IMP=0x0000000100013484
+ (unsigned long long)_readNextHeaderInArchive:(struct archive **)arg1 toEntry:(struct archive_entry **)arg2 error:(id *)arg3;	// IMP=0x000000010001334c
+ (void)_setupWriteArchive:(struct archive **)arg1 withOptions:(int)arg2;	// IMP=0x0000000100013318
+ (_Bool)_readFile:(id)arg1 toArchive:(struct archive **)arg2 error:(id *)arg3;	// IMP=0x000000010001317c
+ (_Bool)deflateArchive:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100012f48

@end

