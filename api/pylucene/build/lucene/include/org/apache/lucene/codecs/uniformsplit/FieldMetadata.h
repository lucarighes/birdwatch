#ifndef org_apache_lucene_codecs_uniformsplit_FieldMetadata_H
#define org_apache_lucene_codecs_uniformsplit_FieldMetadata_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
        class FixedBitSet;
      }
      namespace index {
        class FieldInfo;
      }
      namespace codecs {
        class BlockTermState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class FieldMetadata : public ::java::lang::Object {
           public:
            enum {
              mid_init$_59b56ee38a8bb555,
              mid_init$_70a4cdf2e758c743,
              mid_getDictionaryStartFP_2e5ae9edcb9b072f,
              mid_getDocCount_9972fcc56b44e79d,
              mid_getDocsSeen_db8ef277f046a30b,
              mid_getFieldInfo_7437ab0fdba9315f,
              mid_getFirstBlockStartFP_2e5ae9edcb9b072f,
              mid_getLastBlockStartFP_2e5ae9edcb9b072f,
              mid_getLastTerm_7af2ea2e37ce82b8,
              mid_getNumTerms_2e5ae9edcb9b072f,
              mid_getSumDocFreq_2e5ae9edcb9b072f,
              mid_getSumTotalTermFreq_2e5ae9edcb9b072f,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_setDictionaryStartFP_9c778c9bce6694df,
              mid_setFirstBlockStartFP_9c778c9bce6694df,
              mid_setLastBlockStartFP_9c778c9bce6694df,
              mid_setLastTerm_0bdfd2603b7490a8,
              mid_updateStats_e796bc0c61819518,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldMetadata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldMetadata(const FieldMetadata& obj) : ::java::lang::Object(obj) {}

            FieldMetadata(const ::org::apache::lucene::index::FieldInfo &, jint);
            FieldMetadata(jlong, jlong, jlong, const ::org::apache::lucene::util::BytesRef &);

            jlong getDictionaryStartFP() const;
            jint getDocCount() const;
            ::org::apache::lucene::util::FixedBitSet getDocsSeen() const;
            ::org::apache::lucene::index::FieldInfo getFieldInfo() const;
            jlong getFirstBlockStartFP() const;
            jlong getLastBlockStartFP() const;
            ::org::apache::lucene::util::BytesRef getLastTerm() const;
            jlong getNumTerms() const;
            jlong getSumDocFreq() const;
            jlong getSumTotalTermFreq() const;
            jlong ramBytesUsed() const;
            void setDictionaryStartFP(jlong) const;
            void setFirstBlockStartFP(jlong) const;
            void setLastBlockStartFP(jlong) const;
            void setLastTerm(const ::org::apache::lucene::util::BytesRef &) const;
            void updateStats(const ::org::apache::lucene::codecs::BlockTermState &) const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(FieldMetadata);
          extern PyTypeObject *PY_TYPE(FieldMetadata);

          class t_FieldMetadata {
          public:
            PyObject_HEAD
            FieldMetadata object;
            static PyObject *wrap_Object(const FieldMetadata&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
