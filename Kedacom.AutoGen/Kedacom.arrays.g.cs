using System;
using System.Runtime.InteropServices;

namespace Kedacom.AutoGen
{
    #pragma warning disable 169
    
    public unsafe struct bool_array4
    {
        public static readonly int Size = 4;
        fixed bool _[4];
        
        public bool this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (bool_array4* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (bool_array4* p = &this) { p->_[i] = value; } }
        }
        public bool[] ToArray()
        {
            fixed (bool_array4* p = &this) { var a = new bool[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(bool[] array)
        {
            fixed (bool_array4* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator bool[](bool_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array4
    {
        public static readonly int Size = 4;
        fixed byte _[4];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array4* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array4* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array4* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array4* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagAreaDetectParam_array4
    {
        public static readonly int Size = 4;
        tagAreaDetectParam _0; tagAreaDetectParam _1; tagAreaDetectParam _2; tagAreaDetectParam _3;
        
        public tagAreaDetectParam this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagAreaDetectParam* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagAreaDetectParam* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagAreaDetectParam[] ToArray()
        {
            fixed (tagAreaDetectParam* p0 = &_0) { var a = new tagAreaDetectParam[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagAreaDetectParam[] array)
        {
            fixed (tagAreaDetectParam* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagAreaDetectParam[](tagAreaDetectParam_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagAutoAdaptInfo_array4
    {
        public static readonly int Size = 4;
        tagAutoAdaptInfo _0; tagAutoAdaptInfo _1; tagAutoAdaptInfo _2; tagAutoAdaptInfo _3;
        
        public tagAutoAdaptInfo this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagAutoAdaptInfo* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagAutoAdaptInfo* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagAutoAdaptInfo[] ToArray()
        {
            fixed (tagAutoAdaptInfo* p0 = &_0) { var a = new tagAutoAdaptInfo[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagAutoAdaptInfo[] array)
        {
            fixed (tagAutoAdaptInfo* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagAutoAdaptInfo[](tagAutoAdaptInfo_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagObjectDetectParam_array4
    {
        public static readonly int Size = 4;
        tagObjectDetectParam _0; tagObjectDetectParam _1; tagObjectDetectParam _2; tagObjectDetectParam _3;
        
        public tagObjectDetectParam this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagObjectDetectParam* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagObjectDetectParam* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagObjectDetectParam[] ToArray()
        {
            fixed (tagObjectDetectParam* p0 = &_0) { var a = new tagObjectDetectParam[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagObjectDetectParam[] array)
        {
            fixed (tagObjectDetectParam* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagObjectDetectParam[](tagObjectDetectParam_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagPersontDetectParam_array4
    {
        public static readonly int Size = 4;
        tagPersontDetectParam _0; tagPersontDetectParam _1; tagPersontDetectParam _2; tagPersontDetectParam _3;
        
        public tagPersontDetectParam this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagPersontDetectParam* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagPersontDetectParam* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagPersontDetectParam[] ToArray()
        {
            fixed (tagPersontDetectParam* p0 = &_0) { var a = new tagPersontDetectParam[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagPersontDetectParam[] array)
        {
            fixed (tagPersontDetectParam* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagPersontDetectParam[](tagPersontDetectParam_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagShieldArea_array4
    {
        public static readonly int Size = 4;
        tagShieldArea _0; tagShieldArea _1; tagShieldArea _2; tagShieldArea _3;
        
        public tagShieldArea this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagShieldArea* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagShieldArea* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagShieldArea[] ToArray()
        {
            fixed (tagShieldArea* p0 = &_0) { var a = new tagShieldArea[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagShieldArea[] array)
        {
            fixed (tagShieldArea* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagShieldArea[](tagShieldArea_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagWarningLineParam_array4
    {
        public static readonly int Size = 4;
        tagWarningLineParam _0; tagWarningLineParam _1; tagWarningLineParam _2; tagWarningLineParam _3;
        
        public tagWarningLineParam this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagWarningLineParam* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagWarningLineParam* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagWarningLineParam[] ToArray()
        {
            fixed (tagWarningLineParam* p0 = &_0) { var a = new tagWarningLineParam[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagWarningLineParam[] array)
        {
            fixed (tagWarningLineParam* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagWarningLineParam[](tagWarningLineParam_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct uint_array4
    {
        public static readonly int Size = 4;
        fixed uint _[4];
        
        public uint this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (uint_array4* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (uint_array4* p = &this) { p->_[i] = value; } }
        }
        public uint[] ToArray()
        {
            fixed (uint_array4* p = &this) { var a = new uint[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(uint[] array)
        {
            fixed (uint_array4* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator uint[](uint_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct ushort_array4
    {
        public static readonly int Size = 4;
        fixed ushort _[4];
        
        public ushort this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (ushort_array4* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (ushort_array4* p = &this) { p->_[i] = value; } }
        }
        public ushort[] ToArray()
        {
            fixed (ushort_array4* p = &this) { var a = new ushort[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(ushort[] array)
        {
            fixed (ushort_array4* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator ushort[](ushort_array4 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array5
    {
        public static readonly int Size = 5;
        fixed byte _[5];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array5* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array5* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array5* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array5* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array5 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagA1List_array5
    {
        public static readonly int Size = 5;
        tagA1List _0; tagA1List _1; tagA1List _2; tagA1List _3; tagA1List _4;
        
        public tagA1List this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagA1List* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagA1List* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagA1List[] ToArray()
        {
            fixed (tagA1List* p0 = &_0) { var a = new tagA1List[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagA1List[] array)
        {
            fixed (tagA1List* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagA1List[](tagA1List_array5 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagDiskInfo_array5
    {
        public static readonly int Size = 5;
        tagDiskInfo _0; tagDiskInfo _1; tagDiskInfo _2; tagDiskInfo _3; tagDiskInfo _4;
        
        public tagDiskInfo this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagDiskInfo* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagDiskInfo* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagDiskInfo[] ToArray()
        {
            fixed (tagDiskInfo* p0 = &_0) { var a = new tagDiskInfo[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagDiskInfo[] array)
        {
            fixed (tagDiskInfo* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagDiskInfo[](tagDiskInfo_array5 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagAreaPointList_array6
    {
        public static readonly int Size = 6;
        tagAreaPointList _0; tagAreaPointList _1; tagAreaPointList _2; tagAreaPointList _3; tagAreaPointList _4; tagAreaPointList _5;
        
        public tagAreaPointList this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagAreaPointList* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagAreaPointList* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagAreaPointList[] ToArray()
        {
            fixed (tagAreaPointList* p0 = &_0) { var a = new tagAreaPointList[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagAreaPointList[] array)
        {
            fixed (tagAreaPointList* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagAreaPointList[](tagAreaPointList_array6 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagManualSnap_array6
    {
        public static readonly int Size = 6;
        tagManualSnap _0; tagManualSnap _1; tagManualSnap _2; tagManualSnap _3; tagManualSnap _4; tagManualSnap _5;
        
        public tagManualSnap this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagManualSnap* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagManualSnap* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagManualSnap[] ToArray()
        {
            fixed (tagManualSnap* p0 = &_0) { var a = new tagManualSnap[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagManualSnap[] array)
        {
            fixed (tagManualSnap* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagManualSnap[](tagManualSnap_array6 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array7
    {
        public static readonly int Size = 7;
        fixed byte _[7];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array7* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array7* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array7* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array7* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array7 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagIrcutFixTime_array7
    {
        public static readonly int Size = 7;
        tagIrcutFixTime _0; tagIrcutFixTime _1; tagIrcutFixTime _2; tagIrcutFixTime _3; tagIrcutFixTime _4; tagIrcutFixTime _5; tagIrcutFixTime _6;
        
        public tagIrcutFixTime this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagIrcutFixTime* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagIrcutFixTime* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagIrcutFixTime[] ToArray()
        {
            fixed (tagIrcutFixTime* p0 = &_0) { var a = new tagIrcutFixTime[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagIrcutFixTime[] array)
        {
            fixed (tagIrcutFixTime* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagIrcutFixTime[](tagIrcutFixTime_array7 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array8
    {
        public static readonly int Size = 8;
        fixed byte _[8];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array8* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array8* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array8* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array8* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array8 @struct) => @struct.ToArray();
    }
    
    public unsafe struct ushort_array8
    {
        public static readonly int Size = 8;
        fixed ushort _[8];
        
        public ushort this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (ushort_array8* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (ushort_array8* p = &this) { p->_[i] = value; } }
        }
        public ushort[] ToArray()
        {
            fixed (ushort_array8* p = &this) { var a = new ushort[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(ushort[] array)
        {
            fixed (ushort_array8* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator ushort[](ushort_array8 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array9
    {
        public static readonly int Size = 9;
        fixed byte _[9];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array9* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array9* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array9* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array9* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array9 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array10
    {
        public static readonly int Size = 10;
        fixed byte _[10];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array10* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array10* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array10* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array10* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array10 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagCheckPoint_array10
    {
        public static readonly int Size = 10;
        tagCheckPoint _0; tagCheckPoint _1; tagCheckPoint _2; tagCheckPoint _3; tagCheckPoint _4; tagCheckPoint _5; tagCheckPoint _6; tagCheckPoint _7; tagCheckPoint _8; tagCheckPoint _9;
        
        public tagCheckPoint this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagCheckPoint* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagCheckPoint* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagCheckPoint[] ToArray()
        {
            fixed (tagCheckPoint* p0 = &_0) { var a = new tagCheckPoint[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagCheckPoint[] array)
        {
            fixed (tagCheckPoint* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagCheckPoint[](tagCheckPoint_array10 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagUserDef_array10
    {
        public static readonly int Size = 10;
        tagUserDef _0; tagUserDef _1; tagUserDef _2; tagUserDef _3; tagUserDef _4; tagUserDef _5; tagUserDef _6; tagUserDef _7; tagUserDef _8; tagUserDef _9;
        
        public tagUserDef this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagUserDef* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagUserDef* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagUserDef[] ToArray()
        {
            fixed (tagUserDef* p0 = &_0) { var a = new tagUserDef[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagUserDef[] array)
        {
            fixed (tagUserDef* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagUserDef[](tagUserDef_array10 @struct) => @struct.ToArray();
    }
    
    public unsafe struct uint_array12
    {
        public static readonly int Size = 12;
        fixed uint _[12];
        
        public uint this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (uint_array12* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (uint_array12* p = &this) { p->_[i] = value; } }
        }
        public uint[] ToArray()
        {
            fixed (uint_array12* p = &this) { var a = new uint[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(uint[] array)
        {
            fixed (uint_array12* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator uint[](uint_array12 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagVideoCapList_array15
    {
        public static readonly int Size = 15;
        tagVideoCapList _0; tagVideoCapList _1; tagVideoCapList _2; tagVideoCapList _3; tagVideoCapList _4; tagVideoCapList _5; tagVideoCapList _6; tagVideoCapList _7; tagVideoCapList _8; tagVideoCapList _9; tagVideoCapList _10; tagVideoCapList _11; tagVideoCapList _12; tagVideoCapList _13; tagVideoCapList _14;
        
        public tagVideoCapList this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagVideoCapList* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagVideoCapList* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagVideoCapList[] ToArray()
        {
            fixed (tagVideoCapList* p0 = &_0) { var a = new tagVideoCapList[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagVideoCapList[] array)
        {
            fixed (tagVideoCapList* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagVideoCapList[](tagVideoCapList_array15 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array16
    {
        public static readonly int Size = 16;
        fixed byte _[16];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array16* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array16* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array16* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array16* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array16 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagOsdList_array16
    {
        public static readonly int Size = 16;
        tagOsdList _0; tagOsdList _1; tagOsdList _2; tagOsdList _3; tagOsdList _4; tagOsdList _5; tagOsdList _6; tagOsdList _7; tagOsdList _8; tagOsdList _9; tagOsdList _10; tagOsdList _11; tagOsdList _12; tagOsdList _13; tagOsdList _14; tagOsdList _15;
        
        public tagOsdList this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagOsdList* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagOsdList* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagOsdList[] ToArray()
        {
            fixed (tagOsdList* p0 = &_0) { var a = new tagOsdList[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagOsdList[] array)
        {
            fixed (tagOsdList* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagOsdList[](tagOsdList_array16 @struct) => @struct.ToArray();
    }
    
    public unsafe struct ushort_array16
    {
        public static readonly int Size = 16;
        fixed ushort _[16];
        
        public ushort this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (ushort_array16* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (ushort_array16* p = &this) { p->_[i] = value; } }
        }
        public ushort[] ToArray()
        {
            fixed (ushort_array16* p = &this) { var a = new ushort[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(ushort[] array)
        {
            fixed (ushort_array16* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator ushort[](ushort_array16 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array17
    {
        public static readonly int Size = 17;
        fixed byte _[17];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array17* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array17* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array17* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array17* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array17 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array18
    {
        public static readonly int Size = 18;
        fixed byte _[18];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array18* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array18* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array18* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array18* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array18 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagSmartOsd_array24
    {
        public static readonly int Size = 24;
        tagSmartOsd _0; tagSmartOsd _1; tagSmartOsd _2; tagSmartOsd _3; tagSmartOsd _4; tagSmartOsd _5; tagSmartOsd _6; tagSmartOsd _7; tagSmartOsd _8; tagSmartOsd _9; tagSmartOsd _10; tagSmartOsd _11; tagSmartOsd _12; tagSmartOsd _13; tagSmartOsd _14; tagSmartOsd _15; tagSmartOsd _16; tagSmartOsd _17; tagSmartOsd _18; tagSmartOsd _19; tagSmartOsd _20; tagSmartOsd _21; tagSmartOsd _22; tagSmartOsd _23;
        
        public tagSmartOsd this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagSmartOsd* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagSmartOsd* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagSmartOsd[] ToArray()
        {
            fixed (tagSmartOsd* p0 = &_0) { var a = new tagSmartOsd[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagSmartOsd[] array)
        {
            fixed (tagSmartOsd* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagSmartOsd[](tagSmartOsd_array24 @struct) => @struct.ToArray();
    }
    
    public unsafe struct bool_array32
    {
        public static readonly int Size = 32;
        fixed bool _[32];
        
        public bool this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (bool_array32* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (bool_array32* p = &this) { p->_[i] = value; } }
        }
        public bool[] ToArray()
        {
            fixed (bool_array32* p = &this) { var a = new bool[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(bool[] array)
        {
            fixed (bool_array32* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator bool[](bool_array32 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array32
    {
        public static readonly int Size = 32;
        fixed byte _[32];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array32* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array32* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array32* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array32* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array32 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagVideoFrameCapList_array32
    {
        public static readonly int Size = 32;
        tagVideoFrameCapList _0; tagVideoFrameCapList _1; tagVideoFrameCapList _2; tagVideoFrameCapList _3; tagVideoFrameCapList _4; tagVideoFrameCapList _5; tagVideoFrameCapList _6; tagVideoFrameCapList _7; tagVideoFrameCapList _8; tagVideoFrameCapList _9; tagVideoFrameCapList _10; tagVideoFrameCapList _11; tagVideoFrameCapList _12; tagVideoFrameCapList _13; tagVideoFrameCapList _14; tagVideoFrameCapList _15; tagVideoFrameCapList _16; tagVideoFrameCapList _17; tagVideoFrameCapList _18; tagVideoFrameCapList _19; tagVideoFrameCapList _20; tagVideoFrameCapList _21; tagVideoFrameCapList _22; tagVideoFrameCapList _23; tagVideoFrameCapList _24; tagVideoFrameCapList _25; tagVideoFrameCapList _26; tagVideoFrameCapList _27; tagVideoFrameCapList _28; tagVideoFrameCapList _29; tagVideoFrameCapList _30; tagVideoFrameCapList _31;
        
        public tagVideoFrameCapList this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagVideoFrameCapList* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagVideoFrameCapList* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagVideoFrameCapList[] ToArray()
        {
            fixed (tagVideoFrameCapList* p0 = &_0) { var a = new tagVideoFrameCapList[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagVideoFrameCapList[] array)
        {
            fixed (tagVideoFrameCapList* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagVideoFrameCapList[](tagVideoFrameCapList_array32 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array33
    {
        public static readonly int Size = 33;
        fixed byte _[33];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array33* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array33* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array33* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array33* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array33 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array35
    {
        public static readonly int Size = 35;
        fixed byte _[35];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array35* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array35* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array35* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array35* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array35 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array64
    {
        public static readonly int Size = 64;
        fixed byte _[64];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array64* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array64* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array64* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array64* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array64 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array65
    {
        public static readonly int Size = 65;
        fixed byte _[65];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array65* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array65* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array65* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array65* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array65 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array128
    {
        public static readonly int Size = 128;
        fixed byte _[128];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array128* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array128* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array128* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array128* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array128 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array129
    {
        public static readonly int Size = 129;
        fixed byte _[129];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array129* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array129* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array129* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array129* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array129 @struct) => @struct.ToArray();
    }
    
    public unsafe struct tagPtzPreset_array256
    {
        public static readonly int Size = 256;
        tagPtzPreset _0; tagPtzPreset _1; tagPtzPreset _2; tagPtzPreset _3; tagPtzPreset _4; tagPtzPreset _5; tagPtzPreset _6; tagPtzPreset _7; tagPtzPreset _8; tagPtzPreset _9; tagPtzPreset _10; tagPtzPreset _11; tagPtzPreset _12; tagPtzPreset _13; tagPtzPreset _14; tagPtzPreset _15; tagPtzPreset _16; tagPtzPreset _17; tagPtzPreset _18; tagPtzPreset _19; tagPtzPreset _20; tagPtzPreset _21; tagPtzPreset _22; tagPtzPreset _23; tagPtzPreset _24; tagPtzPreset _25; tagPtzPreset _26; tagPtzPreset _27; tagPtzPreset _28; tagPtzPreset _29; tagPtzPreset _30; tagPtzPreset _31; tagPtzPreset _32; tagPtzPreset _33; tagPtzPreset _34; tagPtzPreset _35; tagPtzPreset _36; tagPtzPreset _37; tagPtzPreset _38; tagPtzPreset _39; tagPtzPreset _40; tagPtzPreset _41; tagPtzPreset _42; tagPtzPreset _43; tagPtzPreset _44; tagPtzPreset _45; tagPtzPreset _46; tagPtzPreset _47; tagPtzPreset _48; tagPtzPreset _49; tagPtzPreset _50; tagPtzPreset _51; tagPtzPreset _52; tagPtzPreset _53; tagPtzPreset _54; tagPtzPreset _55; tagPtzPreset _56; tagPtzPreset _57; tagPtzPreset _58; tagPtzPreset _59; tagPtzPreset _60; tagPtzPreset _61; tagPtzPreset _62; tagPtzPreset _63; tagPtzPreset _64; tagPtzPreset _65; tagPtzPreset _66; tagPtzPreset _67; tagPtzPreset _68; tagPtzPreset _69; tagPtzPreset _70; tagPtzPreset _71; tagPtzPreset _72; tagPtzPreset _73; tagPtzPreset _74; tagPtzPreset _75; tagPtzPreset _76; tagPtzPreset _77; tagPtzPreset _78; tagPtzPreset _79; tagPtzPreset _80; tagPtzPreset _81; tagPtzPreset _82; tagPtzPreset _83; tagPtzPreset _84; tagPtzPreset _85; tagPtzPreset _86; tagPtzPreset _87; tagPtzPreset _88; tagPtzPreset _89; tagPtzPreset _90; tagPtzPreset _91; tagPtzPreset _92; tagPtzPreset _93; tagPtzPreset _94; tagPtzPreset _95; tagPtzPreset _96; tagPtzPreset _97; tagPtzPreset _98; tagPtzPreset _99; tagPtzPreset _100; tagPtzPreset _101; tagPtzPreset _102; tagPtzPreset _103; tagPtzPreset _104; tagPtzPreset _105; tagPtzPreset _106; tagPtzPreset _107; tagPtzPreset _108; tagPtzPreset _109; tagPtzPreset _110; tagPtzPreset _111; tagPtzPreset _112; tagPtzPreset _113; tagPtzPreset _114; tagPtzPreset _115; tagPtzPreset _116; tagPtzPreset _117; tagPtzPreset _118; tagPtzPreset _119; tagPtzPreset _120; tagPtzPreset _121; tagPtzPreset _122; tagPtzPreset _123; tagPtzPreset _124; tagPtzPreset _125; tagPtzPreset _126; tagPtzPreset _127; tagPtzPreset _128; tagPtzPreset _129; tagPtzPreset _130; tagPtzPreset _131; tagPtzPreset _132; tagPtzPreset _133; tagPtzPreset _134; tagPtzPreset _135; tagPtzPreset _136; tagPtzPreset _137; tagPtzPreset _138; tagPtzPreset _139; tagPtzPreset _140; tagPtzPreset _141; tagPtzPreset _142; tagPtzPreset _143; tagPtzPreset _144; tagPtzPreset _145; tagPtzPreset _146; tagPtzPreset _147; tagPtzPreset _148; tagPtzPreset _149; tagPtzPreset _150; tagPtzPreset _151; tagPtzPreset _152; tagPtzPreset _153; tagPtzPreset _154; tagPtzPreset _155; tagPtzPreset _156; tagPtzPreset _157; tagPtzPreset _158; tagPtzPreset _159; tagPtzPreset _160; tagPtzPreset _161; tagPtzPreset _162; tagPtzPreset _163; tagPtzPreset _164; tagPtzPreset _165; tagPtzPreset _166; tagPtzPreset _167; tagPtzPreset _168; tagPtzPreset _169; tagPtzPreset _170; tagPtzPreset _171; tagPtzPreset _172; tagPtzPreset _173; tagPtzPreset _174; tagPtzPreset _175; tagPtzPreset _176; tagPtzPreset _177; tagPtzPreset _178; tagPtzPreset _179; tagPtzPreset _180; tagPtzPreset _181; tagPtzPreset _182; tagPtzPreset _183; tagPtzPreset _184; tagPtzPreset _185; tagPtzPreset _186; tagPtzPreset _187; tagPtzPreset _188; tagPtzPreset _189; tagPtzPreset _190; tagPtzPreset _191; tagPtzPreset _192; tagPtzPreset _193; tagPtzPreset _194; tagPtzPreset _195; tagPtzPreset _196; tagPtzPreset _197; tagPtzPreset _198; tagPtzPreset _199; tagPtzPreset _200; tagPtzPreset _201; tagPtzPreset _202; tagPtzPreset _203; tagPtzPreset _204; tagPtzPreset _205; tagPtzPreset _206; tagPtzPreset _207; tagPtzPreset _208; tagPtzPreset _209; tagPtzPreset _210; tagPtzPreset _211; tagPtzPreset _212; tagPtzPreset _213; tagPtzPreset _214; tagPtzPreset _215; tagPtzPreset _216; tagPtzPreset _217; tagPtzPreset _218; tagPtzPreset _219; tagPtzPreset _220; tagPtzPreset _221; tagPtzPreset _222; tagPtzPreset _223; tagPtzPreset _224; tagPtzPreset _225; tagPtzPreset _226; tagPtzPreset _227; tagPtzPreset _228; tagPtzPreset _229; tagPtzPreset _230; tagPtzPreset _231; tagPtzPreset _232; tagPtzPreset _233; tagPtzPreset _234; tagPtzPreset _235; tagPtzPreset _236; tagPtzPreset _237; tagPtzPreset _238; tagPtzPreset _239; tagPtzPreset _240; tagPtzPreset _241; tagPtzPreset _242; tagPtzPreset _243; tagPtzPreset _244; tagPtzPreset _245; tagPtzPreset _246; tagPtzPreset _247; tagPtzPreset _248; tagPtzPreset _249; tagPtzPreset _250; tagPtzPreset _251; tagPtzPreset _252; tagPtzPreset _253; tagPtzPreset _254; tagPtzPreset _255;
        
        public tagPtzPreset this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagPtzPreset* p0 = &_0) { return *(p0 + i); } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (tagPtzPreset* p0 = &_0) { *(p0 + i) = value;  } }
        }
        public tagPtzPreset[] ToArray()
        {
            fixed (tagPtzPreset* p0 = &_0) { var a = new tagPtzPreset[Size]; for (uint i = 0; i < Size; i++) a[i] = *(p0 + i); return a; }
        }
        public void UpdateFrom(tagPtzPreset[] array)
        {
            fixed (tagPtzPreset* p0 = &_0) { uint i = 0; foreach(var value in array) { *(p0 + i++) = value; if (i >= Size) return; } }
        }
        public static implicit operator tagPtzPreset[](tagPtzPreset_array256 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array260
    {
        public static readonly int Size = 260;
        fixed byte _[260];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array260* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array260* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array260* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array260* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array260 @struct) => @struct.ToArray();
    }
    
    public unsafe struct byte_array1024
    {
        public static readonly int Size = 1024;
        fixed byte _[1024];
        
        public byte this[uint i]
        {
            get { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array1024* p = &this) { return p->_[i]; } }
            set { if (i >= Size) throw new ArgumentOutOfRangeException(); fixed (byte_array1024* p = &this) { p->_[i] = value; } }
        }
        public byte[] ToArray()
        {
            fixed (byte_array1024* p = &this) { var a = new byte[Size]; for (uint i = 0; i < Size; i++) a[i] = p->_[i]; return a; }
        }
        public void UpdateFrom(byte[] array)
        {
            fixed (byte_array1024* p = &this) { uint i = 0; foreach(var value in array) { p->_[i++] = value; if (i >= Size) return; } }
        }
        public static implicit operator byte[](byte_array1024 @struct) => @struct.ToArray();
    }
    
}
