#ifndef org_apache_lucene_util_bkd_BKDReader$IndexTree_H
#define org_apache_lucene_util_bkd_BKDReader$IndexTree_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace bkd {
          class BKDReader$IndexTree;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDReader$IndexTree : public ::java::lang::Object {
           public:
            enum {
              mid_clone_e60fdb7742b3b605,
              mid_getLeafBlockFP_2e5ae9edcb9b072f,
              mid_getNodeID_9972fcc56b44e79d,
              mid_getNumLeaves_9972fcc56b44e79d,
              mid_getSplitDim_9972fcc56b44e79d,
              mid_getSplitDimValue_7af2ea2e37ce82b8,
              mid_getSplitPackedValue_cf386cdb1bbd339f,
              mid_isLeafNode_8454bd5aa23fd11e,
              mid_nodeExists_8454bd5aa23fd11e,
              mid_pop_f2cc1bce94666404,
              mid_pushLeft_f2cc1bce94666404,
              mid_pushRight_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDReader$IndexTree(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDReader$IndexTree(const BKDReader$IndexTree& obj) : ::java::lang::Object(obj) {}

            BKDReader$IndexTree clone() const;
            jlong getLeafBlockFP() const;
            jint getNodeID() const;
            jint getNumLeaves() const;
            jint getSplitDim() const;
            ::org::apache::lucene::util::BytesRef getSplitDimValue() const;
            JArray< jbyte > getSplitPackedValue() const;
            jboolean isLeafNode() const;
            jboolean nodeExists() const;
            void pop() const;
            void pushLeft() const;
            void pushRight() const;
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
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(BKDReader$IndexTree);
          extern PyTypeObject *PY_TYPE(BKDReader$IndexTree);

          class t_BKDReader$IndexTree {
          public:
            PyObject_HEAD
            BKDReader$IndexTree object;
            static PyObject *wrap_Object(const BKDReader$IndexTree&);
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
