#ifndef org_apache_lucene_util_fst_FST_H
#define org_apache_lucene_util_fst_FST_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class FST$Arc;
          class FSTStore;
          class FST;
          class Outputs;
        }
        class Accountable;
      }
      namespace store {
        class DataOutput;
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class FST : public ::java::lang::Object {
           public:
            enum {
              mid_init$_961b3637509eea1b,
              mid_init$_316b9676904bfa61,
              mid_findTargetArc_2899a01db54b2fe5,
              mid_getBytesReader_79a0688c6e123a32,
              mid_getEmptyOutput_d6bcd06f3102c4d9,
              mid_getFirstArc_bfd8ca0b4a5c83d7,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_read_18aecd7ac1ec9695,
              mid_readArcByDirectAddressing_3a7781c7a4137df4,
              mid_readArcByIndex_3a7781c7a4137df4,
              mid_readFirstRealTargetArc_b66b3c9d8a4b347b,
              mid_readFirstTargetArc_2b58b0ade86af743,
              mid_readLabel_0b0c96eca0e3c655,
              mid_readLastArcByDirectAddressing_665a52d3e97f75b2,
              mid_readNextArc_665a52d3e97f75b2,
              mid_readNextRealArc_665a52d3e97f75b2,
              mid_save_636077fee54d306c,
              mid_save_90bc5695a07a6bd6,
              mid_targetHasArcs_55991bca782f4822,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_outputs,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FST(const FST& obj) : ::java::lang::Object(obj) {}

            static jbyte ARCS_FOR_BINARY_SEARCH;
            static jint BIT_ARC_HAS_OUTPUT;
            static jint END_LABEL;

            ::org::apache::lucene::util::fst::Outputs _get_outputs() const;

            FST(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::fst::Outputs &);
            FST(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::fst::Outputs &, const ::org::apache::lucene::util::fst::FSTStore &);

            ::org::apache::lucene::util::fst::FST$Arc findTargetArc(jint, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$BytesReader getBytesReader() const;
            ::java::lang::Object getEmptyOutput() const;
            ::org::apache::lucene::util::fst::FST$Arc getFirstArc(const ::org::apache::lucene::util::fst::FST$Arc &) const;
            jlong ramBytesUsed() const;
            static FST read(const ::java::nio::file::Path &, const ::org::apache::lucene::util::fst::Outputs &);
            ::org::apache::lucene::util::fst::FST$Arc readArcByDirectAddressing(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &, jint) const;
            ::org::apache::lucene::util::fst::FST$Arc readArcByIndex(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &, jint) const;
            ::org::apache::lucene::util::fst::FST$Arc readFirstRealTargetArc(jlong, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readFirstTargetArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            jint readLabel(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::fst::FST$Arc readLastArcByDirectAddressing(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readNextArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            ::org::apache::lucene::util::fst::FST$Arc readNextRealArc(const ::org::apache::lucene::util::fst::FST$Arc &, const ::org::apache::lucene::util::fst::FST$BytesReader &) const;
            void save(const ::java::nio::file::Path &) const;
            void save(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::store::DataOutput &) const;
            static jboolean targetHasArcs(const ::org::apache::lucene::util::fst::FST$Arc &);
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(FST);
          extern PyTypeObject *PY_TYPE(FST);

          class t_FST {
          public:
            PyObject_HEAD
            FST object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
