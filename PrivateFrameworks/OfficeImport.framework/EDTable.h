/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDCollection, NSString, EDReference, EDResources;

@interface EDTable : NSObject {
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
    NSUInteger mDataAreaBorderDxfIndex;
    NSUInteger mDataAreaDxfIndex;
    NSString *mDisplayName;
    NSUInteger mHeaderRowBorderDxfIndex;
    NSUInteger mHeaderRowCount;
    NSUInteger mHeaderRowDxfIndex;
    NSString *mName;
    EDResources *mResources;
    NSUInteger mStyleIndex;
    NSString *mStyleName;
    NSUInteger mTableBorderDxfIndex;
    EDCollection *mTableColumns;
    EDReference *mTableRange;
    NSUInteger mTotalsRowBorderDxfIndex;
    NSUInteger mTotalsRowCount;
    NSUInteger mTotalsRowDxfIndex;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowColumnStripes;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowFirstColumn;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowLastColumn;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowRowStripes;
}

+ (id)tableWithResources:(id)arg1;

- (id)dataAreaBorderDxf;
- (NSUInteger)dataAreaBorderDxfIndex;
- (id)dataAreaDxf;
- (NSUInteger)dataAreaDxfIndex;
- (void)dealloc;
- (id)displayName;
- (id)headerRowBorderDxf;
- (NSUInteger)headerRowBorderDxfIndex;
- (NSUInteger)headerRowCount;
- (id)headerRowDxf;
- (NSUInteger)headerRowDxfIndex;
- (id)initWithResources:(id)arg1;
- (id)name;
- (void)setDataAreaBorderDxf:(id)arg1;
- (void)setDataAreaBorderDxfIndex:(NSUInteger)arg1;
- (void)setDataAreaDxf:(id)arg1;
- (void)setDataAreaDxfIndex:(NSUInteger)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHeaderRowBorderDxf:(id)arg1;
- (void)setHeaderRowBorderDxfIndex:(NSUInteger)arg1;
- (void)setHeaderRowCount:(NSUInteger)arg1;
- (void)setHeaderRowDxf:(id)arg1;
- (void)setHeaderRowDxfIndex:(NSUInteger)arg1;
- (void)setName:(id)arg1;
- (void)setShowColumnStripes:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setShowFirstColumn:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setShowLastColumn:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setShowRowStripes:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleIndex:(NSUInteger)arg1;
- (void)setStyleName:(id)arg1;
- (void)setTableBorderDxf:(id)arg1;
- (void)setTableBorderDxfIndex:(NSUInteger)arg1;
- (void)setTableRange:(id)arg1;
- (void)setTotalsRowBorderDxf:(id)arg1;
- (void)setTotalsRowBorderDxfIndex:(NSUInteger)arg1;
- (void)setTotalsRowCount:(NSUInteger)arg1;
- (void)setTotalsRowDxf:(id)arg1;
- (void)setTotalsRowDxfIndex:(NSUInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)showColumnStripes;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)showFirstColumn;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)showLastColumn;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)showRowStripes;
- (id)style;
- (NSUInteger)styleIndex;
- (id)styleName;
- (id)tableBorderDxf;
- (NSUInteger)tableBorderDxfIndex;
- (id)tableColumns;
- (id)tableRange;
- (id)totalsRowBorderDxf;
- (NSUInteger)totalsRowBorderDxfIndex;
- (NSUInteger)totalsRowCount;
- (id)totalsRowDxf;
- (NSUInteger)totalsRowDxfIndex;

@end
